/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9517
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9517
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
void test(val<short> var_0, val<unsigned int> var_1, val<bool> var_3, val<unsigned char> var_4, val<unsigned short> var_7, val<unsigned long long int> var_10, val<short> var_11, val<unsigned long long int> var_12, val<short> var_13, val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<unsigned char*> var_22, val<unsigned short*> var_23) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)26))) / (8551869806138300113ULL)));
    *var_20 = ((/* implicit */val<unsigned char>) max((*var_20), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (max((min((((/* implicit */val<unsigned long long int>) var_11)), (var_12))), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_12))))))))));
    *var_21 = ((/* implicit */val<long long int>) min((*var_21), (((/* implicit */val<long long int>) var_0))));
    *var_22 = ((/* implicit */val<unsigned char>) max((*var_22), (((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_13)))) < (((((/* implicit */val<bool>) var_4)) ? (var_1) : (var_15)))))))))));
    *var_23 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<short>) (val<bool>)0)), ((val<short>)16879)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12429;
unsigned int var_1 = 2818426252U;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)93;
unsigned short var_7 = (unsigned short)47279;
unsigned long long int var_10 = 11269192919966568051ULL;
short var_11 = (short)15347;
unsigned long long int var_12 = 11615435684878408818ULL;
short var_13 = (short)26063;
unsigned int var_15 = 2920605265U;
int zero = 0;
unsigned short var_19 = (unsigned short)16020;
unsigned char var_20 = (unsigned char)138;
long long int var_21 = -6511461506946472881LL;
unsigned char var_22 = (unsigned char)116;
unsigned short var_23 = (unsigned short)44497;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != (unsigned char)175;
    value_mismatch |= var_21 != -6511461506946472881LL;
    value_mismatch |= var_22 != (unsigned char)116;
    value_mismatch |= var_23 != (unsigned short)16879;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_10, var_11, var_12, var_13, var_15, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
