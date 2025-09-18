/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3261
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
void test(val<int> var_0, val<signed char> var_2, val<long long int> var_3, val<short> var_4, val<signed char> var_5, val<long long int> var_7, val<int> zero, val<unsigned char*> var_10, val<short*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (var_7) : (((/* implicit */val<long long int>) 2620307082U))))) ? (((((/* implicit */val<bool>) (~(var_0)))) ? (((var_3) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))) : (min((7753531463446332833LL), (((/* implicit */val<long long int>) var_4)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)26531)))));
    *var_11 &= ((/* implicit */val<short>) var_5);
    *var_12 &= ((/* implicit */val<short>) max((min((((/* implicit */val<unsigned long long int>) (val<short>)-26531)), (9380351394144063831ULL))), ((+(((2029494595672005037ULL) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1674868793;
signed char var_2 = (signed char)-81;
long long int var_3 = -5739878828553314248LL;
short var_4 = (short)19437;
signed char var_5 = (signed char)-107;
long long int var_7 = -6167191048122369977LL;
int zero = 0;
unsigned char var_10 = (unsigned char)192;
short var_11 = (short)-19706;
short var_12 = (short)-5270;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)65;
    value_mismatch |= var_11 != (short)-19708;
    value_mismatch |= var_12 != (short)322;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
}
