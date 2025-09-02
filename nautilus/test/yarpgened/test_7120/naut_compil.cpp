/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7120
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7120
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_3, val<signed char> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned short> var_8, val<short> var_16, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19, val<unsigned char*> var_20) {
    *var_18 = ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) (+(var_1)))) : (var_6));
    *var_19 = ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_16)))) : (min((var_3), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)240)) && (((/* implicit */val<bool>) var_4))))))));
    *var_20 = ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 819886151U;
unsigned long long int var_3 = 439854315320776644ULL;
signed char var_4 = (signed char)-46;
unsigned long long int var_5 = 10515159915464558534ULL;
unsigned long long int var_6 = 5796866794034530241ULL;
unsigned short var_8 = (unsigned short)52311;
short var_16 = (short)-14862;
int zero = 0;
unsigned long long int var_18 = 7812268405731381125ULL;
unsigned long long int var_19 = 6419502137585049671ULL;
unsigned char var_20 = (unsigned char)56;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 819886151ULL;
    value_mismatch |= var_19 != 18446744073709551602ULL;
    value_mismatch |= var_20 != (unsigned char)87;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_8, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
