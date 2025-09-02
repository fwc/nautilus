/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8030
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8030
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_4, val<long long int> var_5, val<unsigned char> var_6, val<signed char> var_8, val<int> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) max((((val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (var_2) : (var_3)))), (((((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) var_11)))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) (-9223372036854775807LL - 1LL))) : (var_2))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_2) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))))))))));
    *var_13 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) max(((+(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_8)), (var_6))))))), (min((((/* implicit */val<long long int>) var_6)), ((+(var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51658;
unsigned long long int var_2 = 13969629843365913398ULL;
unsigned long long int var_3 = 7621146253510510895ULL;
unsigned short var_4 = (unsigned short)45159;
long long int var_5 = 8544114089387180689LL;
unsigned char var_6 = (unsigned char)99;
signed char var_8 = (signed char)89;
int var_11 = -1102267229;
int zero = 0;
long long int var_12 = -6165005266646450275LL;
signed char var_13 = (signed char)-25;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -6165005266646450275LL;
    value_mismatch |= var_13 != (signed char)99;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
