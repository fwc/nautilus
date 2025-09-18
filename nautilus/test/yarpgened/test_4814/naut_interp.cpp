/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4814
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4814
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
void test(val<unsigned long long int> var_1, val<short> var_3, val<unsigned int> var_4, val<unsigned char> var_7, val<int> var_11, val<int> var_12, val<unsigned int> var_14, val<int> var_15, val<unsigned int> var_16, val<unsigned int> var_17, val<int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<short*> var_21, val<long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) var_17)) < ((-(var_1)))));
    *var_21 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) var_7)))) ^ (max((var_16), (((/* implicit */val<unsigned int>) var_15)))))))));
    *var_22 = ((/* implicit */val<long long int>) max(((~(((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<short>)32756)) : (var_11))))), (((((/* implicit */val<bool>) (val<short>)-32756)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))) : (((/* implicit */val<int>) ((val<bool>) var_18)))))));
    *var_23 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) min((var_3), ((val<short>)-32767)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)244)) ? (((/* implicit */val<int>) (val<short>)-32767)) : (var_12)))) : (((((/* implicit */val<bool>) var_3)) ? (var_4) : (2070639919U))))), (((/* implicit */val<unsigned int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7982882262217066777ULL;
short var_3 = (short)-11661;
unsigned int var_4 = 2666392015U;
unsigned char var_7 = (unsigned char)160;
int var_11 = 950332387;
int var_12 = 515029144;
unsigned int var_14 = 1461550903U;
int var_15 = -423109447;
unsigned int var_16 = 503339614U;
unsigned int var_17 = 2434630856U;
int var_18 = -5669226;
int zero = 0;
unsigned long long int var_20 = 13345532039778511267ULL;
short var_21 = (short)-14558;
long long int var_22 = -7687147502766957491LL;
unsigned long long int var_23 = 9788265820672285017ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1ULL;
    value_mismatch |= var_21 != (short)0;
    value_mismatch |= var_22 != 0LL;
    value_mismatch |= var_23 != 4294955635ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_11, var_12, var_14, var_15, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
