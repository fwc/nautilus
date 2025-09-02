/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4321
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4321
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
void test(val<long long int> var_1, val<bool> var_2, val<long long int> var_7, val<unsigned char> var_10, val<bool> var_11, val<int> zero, val<long long int*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) ((val<unsigned char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_2)), ((val<unsigned short>)48661)))) ? ((-(((/* implicit */val<int>) (val<unsigned char>)255)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))))));
    *var_13 += ((/* implicit */val<unsigned short>) ((min((max((((/* implicit */val<long long int>) var_11)), (var_1))), (var_7))) != (((val<long long int>) (val<unsigned char>)211))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8499917583862250950LL;
bool var_2 = (bool)0;
long long int var_7 = 8909997605234273693LL;
unsigned char var_10 = (unsigned char)202;
bool var_11 = (bool)1;
int zero = 0;
long long int var_12 = -6215952420078314013LL;
unsigned short var_13 = (unsigned short)7075;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0LL;
    value_mismatch |= var_13 != (unsigned short)7076;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
