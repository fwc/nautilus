/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6617
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6617
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
void test(val<unsigned long long int> var_8, val<short> var_12, val<unsigned long long int> var_13, val<unsigned short> var_15, val<int> zero, val<short*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    *var_17 = var_12;
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) ? (var_13) : (((/* implicit */val<unsigned long long int>) min((((val<unsigned int>) 6106403115472622931ULL)), (((/* implicit */val<unsigned int>) var_15)))))));
    *var_19 &= ((/* implicit */val<unsigned char>) (+(8ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 137245050192426248ULL;
short var_12 = (short)-27680;
unsigned long long int var_13 = 10887125003171974148ULL;
unsigned short var_15 = (unsigned short)18371;
int zero = 0;
short var_17 = (short)4065;
int var_18 = 2104010759;
unsigned char var_19 = (unsigned char)227;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-27680;
    value_mismatch |= var_18 != 123128836;
    value_mismatch |= var_19 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_12, var_13, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
