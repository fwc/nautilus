/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8919
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8919
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<unsigned short> var_3, val<long long int> var_4, val<unsigned char> var_6, val<short> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<int> zero, val<int*> var_10, val<unsigned short*> var_11, val<long long int*> var_12, val<signed char*> var_13) {
    *var_10 = ((/* implicit */val<int>) min((*var_10), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) ? (min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) | (var_0))), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)4506)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)-37)) - (var_1)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)39480)), (var_8))))))))));
    *var_11 *= ((/* implicit */val<unsigned short>) var_4);
    *var_12 = ((/* implicit */val<long long int>) max((*var_12), (max((((((/* implicit */val<bool>) (val<short>)18678)) ? (-4330745016116791099LL) : (-7376307640571260145LL))), (4330745016116791103LL)))));
    *var_13 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_9)), (((var_1) / (((/* implicit */val<int>) var_6))))))), ((+(max((((/* implicit */val<unsigned long long int>) 2147483647)), (0ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6805341986376623155ULL;
int var_1 = 805475099;
unsigned short var_3 = (unsigned short)64739;
long long int var_4 = -932316188305584827LL;
unsigned char var_6 = (unsigned char)194;
short var_7 = (short)-10858;
unsigned long long int var_8 = 7331202772412531938ULL;
signed char var_9 = (signed char)110;
int zero = 0;
int var_10 = -817389839;
unsigned short var_11 = (unsigned short)39274;
long long int var_12 = 6560929972269819353LL;
signed char var_13 = (signed char)112;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -817389839;
    value_mismatch |= var_11 != (unsigned short)48018;
    value_mismatch |= var_12 != 6560929972269819353LL;
    value_mismatch |= var_13 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
