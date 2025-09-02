/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6555
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6555
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
void test(val<bool> var_0, val<unsigned char> var_2, val<unsigned char> var_4, val<bool> var_11, val<long long int> var_16, val<int> zero, val<unsigned short*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) min((min((min((var_16), (((/* implicit */val<long long int>) var_4)))), (((/* implicit */val<long long int>) var_11)))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_0)), (var_2)))) | (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))));
    *var_18 = ((/* implicit */val<signed char>) (+(((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<int>) max((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)32762)))) : (((/* implicit */val<int>) (val<signed char>)107))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_2 = (unsigned char)41;
unsigned char var_4 = (unsigned char)86;
bool var_11 = (bool)0;
long long int var_16 = -5259010999749007246LL;
int zero = 0;
unsigned short var_17 = (unsigned short)39622;
signed char var_18 = (signed char)53;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)43122;
    value_mismatch |= var_18 != (signed char)-6;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_11, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
