/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7300
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7300
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
void test(val<int> var_0, val<unsigned char> var_1, val<short> var_5, val<unsigned short> var_7, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) max((min((((((/* implicit */val<bool>) 1275514104)) ? (-619337081035347769LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (3864101992U)))))), (((/* implicit */val<long long int>) (val<unsigned short>)12597))));
    *var_18 += ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1841562705;
unsigned char var_1 = (unsigned char)93;
short var_5 = (short)-27047;
unsigned short var_7 = (unsigned short)15604;
int zero = 0;
signed char var_17 = (signed char)-80;
unsigned short var_18 = (unsigned short)61992;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)53;
    value_mismatch |= var_18 != (unsigned short)62085;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
