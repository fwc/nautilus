/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 269
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=269
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
void test(val<long long int> var_1, val<unsigned short> var_4, val<signed char> var_5, val<signed char> var_6, val<signed char> var_7, val<long long int> var_8, val<bool> var_9, val<signed char> var_11, val<int> zero, val<long long int*> var_12, val<short*> var_13, val<short*> var_14, val<long long int*> var_15, val<bool*> var_16) {
    *var_12 = ((/* implicit */val<long long int>) ((val<unsigned int>) ((val<signed char>) var_6)));
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) min((var_4), (((/* implicit */val<unsigned short>) var_9))))))))) - (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<long long int>) 22U)) : (var_1)))));
    *var_14 = ((/* implicit */val<short>) ((((val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (var_8)))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((((((/* implicit */val<bool>) 14937604855932949221ULL)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<unsigned char>)255)))) > (((/* implicit */val<int>) var_11)))))));
    *var_15 = var_1;
    *var_16 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) min((var_5), (var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -522085483204959756LL;
unsigned short var_4 = (unsigned short)21985;
signed char var_5 = (signed char)-13;
signed char var_6 = (signed char)45;
signed char var_7 = (signed char)67;
long long int var_8 = 5895960118157931686LL;
bool var_9 = (bool)1;
signed char var_11 = (signed char)121;
int zero = 0;
long long int var_12 = 7506616133419683515LL;
short var_13 = (short)-8484;
short var_14 = (short)28844;
long long int var_15 = 7734324367483760751LL;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 45LL;
    value_mismatch |= var_13 != (short)-21;
    value_mismatch |= var_14 != (short)67;
    value_mismatch |= var_15 != -522085483204959756LL;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_7, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
