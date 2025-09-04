/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9254
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
void test(val<bool> var_0, val<unsigned short> var_1, val<short> var_3, val<short> var_4, val<unsigned short> var_7, val<unsigned char> var_8, val<unsigned char> var_10, val<unsigned long long int> var_11, val<int> var_12, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) max((var_12), (((((/* implicit */val<bool>) max((var_7), (((/* implicit */val<unsigned short>) var_8))))) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7)))) : ((+(((/* implicit */val<int>) var_7))))))));
    *var_15 += ((/* implicit */val<long long int>) 4611686018427387904ULL);
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-((+(((/* implicit */val<int>) var_0))))))) ? (((/* implicit */val<int>) var_4)) : (max((((val<int>) var_11)), (((((/* implicit */val<bool>) var_1)) ? (var_12) : (((/* implicit */val<int>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)18251;
short var_3 = (short)-10066;
short var_4 = (short)-3822;
unsigned short var_7 = (unsigned short)60913;
unsigned char var_8 = (unsigned char)204;
unsigned char var_10 = (unsigned char)252;
unsigned long long int var_11 = 13301021021591421653ULL;
int var_12 = -1654434564;
int zero = 0;
long long int var_14 = 400534347847497326LL;
long long int var_15 = 1413733237377411190LL;
long long int var_16 = 1159119249222134552LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 60913LL;
    value_mismatch |= var_15 != 6025419255804799094LL;
    value_mismatch |= var_16 != -3822LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_8, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
