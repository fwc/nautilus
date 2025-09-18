/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7384
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7384
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<short> var_1, val<unsigned int> var_3, val<unsigned long long int> var_4, val<short> var_5, val<bool> var_6, val<signed char> var_9, val<unsigned int> var_13, val<long long int> var_14, val<int> zero, val<short*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((((var_14) << (((/* implicit */val<int>) var_6)))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_3)) < (var_4))))))) - (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) == (((/* implicit */val<int>) var_9))))) | (((/* implicit */val<int>) var_9)))))));
    *var_16 = ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<short>)-6168)) & (((/* implicit */val<int>) var_5)))) < (((/* implicit */val<int>) var_1)))))) | (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) && (((/* implicit */val<bool>) var_1)))))) ^ (var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17737;
unsigned int var_3 = 92946619U;
unsigned long long int var_4 = 9469718014000525168ULL;
short var_5 = (short)26079;
bool var_6 = (bool)1;
signed char var_9 = (signed char)69;
unsigned int var_13 = 1945060354U;
long long int var_14 = 3914977744051456679LL;
int zero = 0;
short var_15 = (short)25608;
unsigned int var_16 = 2592791302U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-27383;
    value_mismatch |= var_16 != 1945060355U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_9, var_13, var_14, zero, &var_15, &var_16);
  checksum();
}
