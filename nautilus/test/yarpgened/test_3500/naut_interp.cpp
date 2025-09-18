/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3500
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3500
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
void test(val<int> var_0, val<unsigned char> var_1, val<long long int> var_2, val<bool> var_3, val<unsigned int> var_4, val<short> var_5, val<bool> var_6, val<short> var_7, val<unsigned long long int> var_8, val<unsigned char> var_9, val<unsigned long long int> var_10, val<unsigned int> var_11, val<long long int> var_12, val<unsigned long long int> var_13, val<int> var_14, val<int> zero, val<long long int*> var_15, val<short*> var_16, val<unsigned char*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_15 = ((/* implicit */val<long long int>) max(((-(((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) % (var_8))) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_10) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))))))))));
    *var_16 *= ((/* implicit */val<short>) ((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) ((var_13) < (var_13)))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) > (var_11)))))) * (((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) var_2)) | (var_13))) != (((/* implicit */val<unsigned long long int>) var_12)))))));
    *var_17 *= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((var_13) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_6)), (var_9))))))))));
    *var_18 *= ((/* implicit */val<unsigned short>) ((((((((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) var_11)))) ? (((((/* implicit */val<int>) var_5)) % (var_0))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_10))))))) + (2147483647))) << (min(((~(var_2))), (((/* implicit */val<long long int>) min((var_0), (((/* implicit */val<int>) var_3)))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) min((*var_19), (min((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) != (var_12))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) var_4)))))) : (var_8))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_14)) ? (((var_12) << (((var_0) - (589626522))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_7), (((/* implicit */val<short>) var_9)))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 589626522;
unsigned char var_1 = (unsigned char)204;
long long int var_2 = -2865647113564405911LL;
bool var_3 = (bool)1;
unsigned int var_4 = 3386913464U;
short var_5 = (short)-12700;
bool var_6 = (bool)0;
short var_7 = (short)20246;
unsigned long long int var_8 = 8650162675098343790ULL;
unsigned char var_9 = (unsigned char)67;
unsigned long long int var_10 = 10407873919164451674ULL;
unsigned int var_11 = 1173795867U;
long long int var_12 = 5018172133707199679LL;
unsigned long long int var_13 = 12720640045913597090ULL;
int var_14 = -1127728034;
int zero = 0;
long long int var_15 = -8690796003107395052LL;
short var_16 = (short)-24643;
unsigned char var_17 = (unsigned char)195;
unsigned short var_18 = (unsigned short)21570;
unsigned long long int var_19 = 1886047011151010111ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 12700LL;
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != (unsigned char)195;
    value_mismatch |= var_18 != (unsigned short)25356;
    value_mismatch |= var_19 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
