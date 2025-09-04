/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9594
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9594
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
void test(val<unsigned long long int> var_1, val<short> var_2, val<signed char> var_3, val<signed char> var_5, val<signed char> var_6, val<int> var_8, val<unsigned long long int> var_13, val<unsigned int> var_15, val<unsigned char> var_16, val<int> zero, val<signed char*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21) {
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) < (((((/* implicit */val<bool>) var_5)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))) & (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_16)))))));
    *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) ((val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)-8192)) ? ((+(((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_5))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) min((*var_20), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) ((val<int>) var_13))) && (((/* implicit */val<bool>) min((var_1), (((/* implicit */val<unsigned long long int>) 127U))))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_15))) || ((!(((/* implicit */val<bool>) 126U))))))) : (((((((/* implicit */val<int>) var_6)) + (2147483647))) >> ((((~(2147483633))) - (-2147483639))))))))));
    *var_21 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 759554696081211233ULL;
short var_2 = (short)5498;
signed char var_3 = (signed char)91;
signed char var_5 = (signed char)-5;
signed char var_6 = (signed char)-127;
int var_8 = 1943194009;
unsigned long long int var_13 = 12147272008279144620ULL;
unsigned int var_15 = 1785534823U;
unsigned char var_16 = (unsigned char)235;
int zero = 0;
signed char var_18 = (signed char)61;
bool var_19 = (bool)0;
unsigned long long int var_20 = 13410027515692848237ULL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 1ULL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_8, var_13, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
