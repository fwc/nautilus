/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5757
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5757
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_0, val<unsigned short> var_1, val<unsigned char> var_4, val<signed char> var_5, val<short> var_6, val<unsigned long long int> var_7, val<signed char> var_9, val<bool> var_10, val<int> zero, val<unsigned long long int*> var_11, val<signed char*> var_12) {
    *var_11 = ((min((((780668840U) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))), ((!(((/* implicit */val<bool>) var_0)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) var_4)))))) : (min((((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))))), (((((/* implicit */val<bool>) var_6)) ? (1908777916377774351ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))))));
    *var_12 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) (~((~(370281342U)))))), (min((((/* implicit */val<unsigned long long int>) var_1)), (18446744073709551611ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8240998005115747395LL;
unsigned short var_1 = (unsigned short)26997;
unsigned char var_4 = (unsigned char)175;
signed char var_5 = (signed char)76;
short var_6 = (short)11224;
unsigned long long int var_7 = 619555238024009858ULL;
signed char var_9 = (signed char)-100;
bool var_10 = (bool)1;
int zero = 0;
unsigned long long int var_11 = 4980541237243085183ULL;
signed char var_12 = (signed char)127;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 619555238024009858ULL;
    value_mismatch |= var_12 != (signed char)117;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
