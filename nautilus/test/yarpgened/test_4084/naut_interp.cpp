/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4084
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4084
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
void test(val<signed char> var_1, val<bool> var_3, val<unsigned char> var_4, val<unsigned int> var_7, val<short> var_8, val<long long int> var_9, val<bool> var_10, val<unsigned int> var_11, val<bool> var_12, val<unsigned char> var_15, val<unsigned short> var_16, val<int> zero, val<signed char*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_3) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) == (((/* implicit */val<int>) (val<unsigned char>)60))))) : (((/* implicit */val<int>) var_10))))) : ((~(((((/* implicit */val<bool>) var_4)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) var_7))))))));
    *var_18 = ((/* implicit */val<unsigned int>) max((*var_18), (((/* implicit */val<unsigned int>) max((min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<short>)4082)) : (((/* implicit */val<int>) (val<unsigned short>)5))))), (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))) : (var_9))))), (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) max((var_16), ((val<unsigned short>)5)))), (var_11)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)155;
unsigned int var_7 = 328064961U;
short var_8 = (short)-25749;
long long int var_9 = 2765697622103820511LL;
bool var_10 = (bool)0;
unsigned int var_11 = 1748137818U;
bool var_12 = (bool)1;
unsigned char var_15 = (unsigned char)15;
unsigned short var_16 = (unsigned short)63816;
int zero = 0;
signed char var_17 = (signed char)-28;
unsigned int var_18 = 1648571212U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != 1748137818U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_8, var_9, var_10, var_11, var_12, var_15, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
