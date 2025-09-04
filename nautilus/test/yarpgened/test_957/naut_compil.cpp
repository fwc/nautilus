/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 957
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=957
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
void test(val<long long int> var_1, val<signed char> var_2, val<long long int> var_5, val<unsigned long long int> var_7, val<bool> var_8, val<int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<bool*> var_13) {
    *var_12 = ((((/* implicit */val<bool>) 1295283768)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) | (0ULL)))) ? (var_1) : (((/* implicit */val<long long int>) var_10))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max(((val<bool>)0), (var_8))))) - (((((/* implicit */val<bool>) 16589477360259605426ULL)) ? (var_7) : (var_7))))));
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(max((((/* implicit */val<long long int>) (val<unsigned char>)255)), (var_5)))))) ? (var_7) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) min((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)32767)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6704652733616602966LL;
signed char var_2 = (signed char)-124;
long long int var_5 = -2478755858754561986LL;
unsigned long long int var_7 = 14279549121092093026ULL;
bool var_8 = (bool)0;
int var_10 = -1121099365;
int zero = 0;
unsigned long long int var_12 = 10648794321160563122ULL;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 6704652733616602966ULL;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_8, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
