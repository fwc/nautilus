/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 948
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=948
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
void test(val<unsigned char> var_1, val<signed char> var_2, val<signed char> var_4, val<short> var_8, val<unsigned char> var_10, val<long long int> var_12, val<unsigned char> var_13, val<unsigned long long int> var_14, val<short> var_16, val<bool> var_18, val<int> zero, val<unsigned int*> var_20, val<long long int*> var_21, val<unsigned char*> var_22) {
    *var_20 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_2)) <= (((((/* implicit */val<int>) var_13)) ^ (((/* implicit */val<int>) var_1))))));
    *var_21 ^= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) max((var_8), (((/* implicit */val<short>) var_10))))) == ((~(((/* implicit */val<int>) var_13))))))) >> (((((val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) & (var_14)))) - (19U)))));
    *var_22 |= ((/* implicit */val<unsigned char>) ((min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_18))) - (var_14))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) << (((((/* implicit */val<int>) var_4)) - (91)))))))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (((~(var_12))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
signed char var_2 = (signed char)124;
signed char var_4 = (signed char)110;
short var_8 = (short)24768;
unsigned char var_10 = (unsigned char)102;
long long int var_12 = 5317097084226490321LL;
unsigned char var_13 = (unsigned char)115;
unsigned long long int var_14 = 6256942894840308536ULL;
short var_16 = (short)-29289;
bool var_18 = (bool)1;
int zero = 0;
unsigned int var_20 = 537580122U;
long long int var_21 = 1503369135116882043LL;
unsigned char var_22 = (unsigned char)137;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 537580121U;
    value_mismatch |= var_21 != 1503369135116882043LL;
    value_mismatch |= var_22 != (unsigned char)137;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, var_10, var_12, var_13, var_14, var_16, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
