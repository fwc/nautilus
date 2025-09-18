/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9762
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9762
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<short> var_2, val<unsigned char> var_3, val<int> var_4, val<unsigned short> var_5, val<unsigned int> var_6, val<unsigned short> var_7, val<long long int> var_8, val<unsigned long long int> var_9, val<short> var_11, val<bool> var_12, val<unsigned int> var_13, val<short> var_16, val<int> var_17, val<int> zero, val<bool*> var_18, val<short*> var_19, val<bool*> var_20, val<unsigned char*> var_21, val<short*> var_22) {
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 7095489219908874168LL)) ? (((((/* implicit */val<bool>) ((var_13) ^ (((/* implicit */val<unsigned int>) var_17))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_9))) : (((/* implicit */val<unsigned long long int>) (-(var_8))))));
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(var_6)))) ? (min((((((/* implicit */val<bool>) var_1)) ? (var_13) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))))), (var_6))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)55))))))));
    *var_20 = ((/* implicit */val<bool>) min((*var_20), (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) | (1526217820U))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_17)) ? (var_17) : (((/* implicit */val<int>) var_3)))))))), (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<short>)21884))))), (((((/* implicit */val<bool>) (val<short>)-6605)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_9))))))))));
    *var_21 = ((/* implicit */val<unsigned char>) min((*var_21), (((/* implicit */val<unsigned char>) (val<short>)-6609))));
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((var_13) == (((/* implicit */val<unsigned int>) 367198096)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (((((/* implicit */val<bool>) -1498139550)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_8)))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1498139549)) ? (var_4) : (((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)-21540)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_16))))) : (((var_13) << (((((/* implicit */val<int>) var_2)) - (26559))))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
signed char var_1 = (signed char)106;
short var_2 = (short)26581;
unsigned char var_3 = (unsigned char)120;
int var_4 = -430313952;
unsigned short var_5 = (unsigned short)9429;
unsigned int var_6 = 1046637357U;
unsigned short var_7 = (unsigned short)1904;
long long int var_8 = 8568400368187457706LL;
unsigned long long int var_9 = 4567684126033479488ULL;
short var_11 = (short)24043;
bool var_12 = (bool)1;
unsigned int var_13 = 1664207813U;
short var_16 = (short)22396;
int var_17 = -1904778719;
int zero = 0;
bool var_18 = (bool)1;
short var_19 = (short)-20388;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)164;
short var_22 = (short)21145;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)27437;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (unsigned char)47;
    value_mismatch |= var_22 != (short)219;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
