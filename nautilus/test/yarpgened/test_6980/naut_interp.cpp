/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6980
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6980
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
void test(val<int> var_0, val<short> var_1, val<unsigned long long int> var_2, val<long long int> var_3, val<signed char> var_4, val<int> var_5, val<unsigned short> var_8, val<int> zero, val<unsigned char*> var_10, val<int*> var_11, val<long long int*> var_12, val<unsigned char*> var_13) {
    *var_10 |= ((/* implicit */val<unsigned char>) ((val<bool>) var_2));
    *var_11 |= ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) var_5)))))) - (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) ^ (var_3)))), (var_2)))));
    *var_12 = ((/* implicit */val<long long int>) ((((((/* implicit */val<long long int>) var_5)) | (min((((/* implicit */val<long long int>) var_8)), (-1146782196035741358LL))))) < (((var_3) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))));
    *var_13 = ((/* implicit */val<unsigned char>) (-(var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1096844275;
short var_1 = (short)-11532;
unsigned long long int var_2 = 14693842608598725012ULL;
long long int var_3 = -1856340393562163687LL;
signed char var_4 = (signed char)9;
int var_5 = 2112258885;
unsigned short var_8 = (unsigned short)4643;
int zero = 0;
unsigned char var_10 = (unsigned char)216;
int var_11 = 1051349925;
long long int var_12 = 7087400784569735714LL;
unsigned char var_13 = (unsigned char)210;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)217;
    value_mismatch |= var_11 != -1090822163;
    value_mismatch |= var_12 != 1LL;
    value_mismatch |= var_13 != (unsigned char)243;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
