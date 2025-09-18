/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 459
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=459
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
void test(val<unsigned long long int> var_1, val<unsigned short> var_4, val<signed char> var_7, val<signed char> var_9, val<unsigned long long int> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_15 = ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_12) : (var_1)))) ? (((val<long long int>) 1063819472)) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_7)))))))) | (var_11));
    *var_16 = ((/* implicit */val<unsigned long long int>) max((*var_16), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) ((16742668041987529844ULL) - (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) | (((/* implicit */val<int>) var_7)))))))))));
    *var_17 &= (-(((min((((/* implicit */val<unsigned long long int>) var_7)), (var_12))) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1704076031722021771ULL)))))))));
    *var_18 -= ((/* implicit */val<signed char>) (-(var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5117952633834672905ULL;
unsigned short var_4 = (unsigned short)13691;
signed char var_7 = (signed char)39;
signed char var_9 = (signed char)36;
unsigned long long int var_11 = 1645543951415314357ULL;
unsigned long long int var_12 = 13913155957070951247ULL;
int zero = 0;
unsigned long long int var_15 = 11691595812724095364ULL;
unsigned long long int var_16 = 7571256228244290952ULL;
unsigned long long int var_17 = 5264603387103551282ULL;
signed char var_18 = (signed char)33;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1645543951969525749ULL;
    value_mismatch |= var_16 != 7571256228244290952ULL;
    value_mismatch |= var_17 != 5264603387103551248ULL;
    value_mismatch |= var_18 != (signed char)112;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_9, var_11, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
