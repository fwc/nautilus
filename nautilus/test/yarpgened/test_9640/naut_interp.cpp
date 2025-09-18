/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9640
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9640
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
void test(val<unsigned int> var_0, val<unsigned int> var_4, val<unsigned int> var_5, val<short> var_13, val<signed char> var_14, val<unsigned long long int> var_15, val<int> zero, val<signed char*> var_18, val<short*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) min((((((-84610607) + (2147483647))) >> (((min((((/* implicit */val<unsigned long long int>) (val<short>)23574)), (var_15))) - (23543ULL))))), (((((/* implicit */val<bool>) min((((/* implicit */val<short>) var_14)), (var_13)))) ? (((((((/* implicit */val<int>) (val<signed char>)-69)) + (2147483647))) << (((((((/* implicit */val<int>) (val<signed char>)-64)) + (73))) - (9))))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)0))) >= (var_5))))))));
    *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) ((0U) > (var_4))))));
    *var_20 = ((/* implicit */val<short>) (~(var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 685590677U;
unsigned int var_4 = 4193572546U;
unsigned int var_5 = 2951122017U;
short var_13 = (short)16734;
signed char var_14 = (signed char)-59;
unsigned long long int var_15 = 8666018290008968944ULL;
int zero = 0;
signed char var_18 = (signed char)20;
short var_19 = (short)7083;
short var_20 = (short)23174;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (short)-18582;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_13, var_14, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
}
