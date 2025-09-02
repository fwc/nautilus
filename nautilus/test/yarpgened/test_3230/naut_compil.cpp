/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3230
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3230
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
void test(val<int> var_0, val<int> var_1, val<int> var_2, val<unsigned char> var_3, val<bool> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<int> var_7, val<int> var_8, val<int> var_9, val<int> var_10, val<int> zero, val<int*> var_11, val<unsigned char*> var_12, val<int*> var_13, val<unsigned char*> var_14) {
    *var_11 = max((min((max((((/* implicit */val<int>) var_5)), (var_1))), (min((var_8), (var_1))))), (min((max((var_2), (var_10))), (max((var_7), (-253160262))))));
    *var_12 = ((/* implicit */val<unsigned char>) max((min((max((((/* implicit */val<int>) var_6)), (-114610090))), (min((((/* implicit */val<int>) (val<bool>)1)), (var_1))))), (min((-1), (((/* implicit */val<int>) max(((val<unsigned char>)136), ((val<unsigned char>)152))))))));
    *var_13 = max((min((((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)119)))), (max((-1), (-565686714))))), (max((max((var_10), (((/* implicit */val<int>) var_4)))), (max((var_7), (var_0))))));
    *var_14 -= ((/* implicit */val<unsigned char>) max((max((min((var_9), (((/* implicit */val<int>) (val<unsigned char>)181)))), (((/* implicit */val<int>) max((var_3), (var_3)))))), (min((((/* implicit */val<int>) min(((val<bool>)1), (var_4)))), (max((var_2), (var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2102209432;
int var_1 = 915377530;
int var_2 = -1680209282;
unsigned char var_3 = (unsigned char)86;
bool var_4 = (bool)0;
unsigned char var_5 = (unsigned char)180;
unsigned char var_6 = (unsigned char)187;
int var_7 = 487062980;
int var_8 = 1283383605;
int var_9 = 1911080406;
int var_10 = 1375736379;
int zero = 0;
int var_11 = 1450331899;
unsigned char var_12 = (unsigned char)20;
int var_13 = -2032679158;
unsigned char var_14 = (unsigned char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 915377530;
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != 2102209432;
    value_mismatch |= var_14 != (unsigned char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
