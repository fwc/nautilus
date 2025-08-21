/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=6
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
void test(val<unsigned char> var_1, val<unsigned int> var_3, val<unsigned int> var_4, val<long long int> var_7, val<int> zero, val<unsigned short*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))), ((~(((/* implicit */val<int>) var_1))))))) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) == (max((var_7), (((/* implicit */val<long long int>) var_3))))))))));
    *var_11 = ((/* implicit */val<int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned int var_3 = 847848521U;
unsigned int var_4 = 4131743101U;
long long int var_7 = 5651007851781001195LL;
int zero = 0;
unsigned short var_10 = (unsigned short)42617;
int var_11 = 1929698655;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)0;
    value_mismatch |= var_11 != -163224195;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
