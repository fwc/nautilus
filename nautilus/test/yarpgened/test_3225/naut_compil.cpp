/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3225
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3225
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
void test(val<signed char> var_4, val<unsigned short> var_5, val<unsigned char> var_11, val<unsigned short> var_13, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_18, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_18 &= ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_11))));
    *var_19 = ((/* implicit */val<unsigned long long int>) min((var_5), (((/* implicit */val<unsigned short>) var_4))));
    *var_20 = ((/* implicit */val<short>) var_14);
    *var_21 = ((/* implicit */val<unsigned long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)12;
unsigned short var_5 = (unsigned short)32715;
unsigned char var_11 = (unsigned char)81;
unsigned short var_13 = (unsigned short)63760;
unsigned char var_14 = (unsigned char)127;
int zero = 0;
unsigned int var_18 = 2347800763U;
unsigned long long int var_19 = 5839946333018566051ULL;
short var_20 = (short)-16902;
unsigned long long int var_21 = 7264927436334476741ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 17U;
    value_mismatch |= var_19 != 12ULL;
    value_mismatch |= var_20 != (short)127;
    value_mismatch |= var_21 != 63760ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_11, var_13, var_14, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
