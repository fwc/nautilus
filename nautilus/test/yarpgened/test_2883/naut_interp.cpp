/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2883
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2883
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
void test(val<long long int> var_1, val<int> var_2, val<unsigned short> var_4, val<unsigned long long int> var_5, val<unsigned char> var_7, val<unsigned long long int> var_9, val<short> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned char*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15) {
    *var_12 = ((((/* implicit */val<bool>) var_4)) ? (min((max((((/* implicit */val<unsigned long long int>) var_4)), (17085676922587614414ULL))), (((/* implicit */val<unsigned long long int>) (-(252352894)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 1091358812)) >= ((+(var_5))))))));
    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (((-(var_2))) >> (((((/* implicit */val<int>) ((val<unsigned short>) var_2))) - (6344)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_1)) > (((((/* implicit */val<unsigned long long int>) var_1)) * (var_9)))))) : (((((/* implicit */val<int>) (val<bool>)1)) / ((~(((/* implicit */val<int>) var_4)))))))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) max((max((0LL), (((/* implicit */val<long long int>) var_2)))), (((/* implicit */val<long long int>) var_10))))) == (var_5)));
    *var_15 = ((/* implicit */val<unsigned short>) ((val<int>) (-(((/* implicit */val<int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9163646297406304316LL;
int var_2 = -106751771;
unsigned short var_4 = (unsigned short)59284;
unsigned long long int var_5 = 4863804928753775796ULL;
unsigned char var_7 = (unsigned char)67;
unsigned long long int var_9 = 6502350110989863474ULL;
short var_10 = (short)2162;
int zero = 0;
unsigned long long int var_12 = 9422670268898594665ULL;
unsigned char var_13 = (unsigned char)196;
unsigned short var_14 = (unsigned short)43308;
unsigned short var_15 = (unsigned short)2198;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 17085676922587614414ULL;
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != (unsigned short)0;
    value_mismatch |= var_15 != (unsigned short)65469;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_7, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
