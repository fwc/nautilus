/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5917
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5917
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
void test(val<unsigned char> var_2, val<unsigned short> var_6, val<unsigned int> var_7, val<signed char> var_10, val<int> zero, val<bool*> var_12, val<unsigned long long int*> var_13, val<unsigned short*> var_14) {
    *var_12 |= ((/* implicit */val<bool>) max((min((((val<signed char>) 2350818563800694493ULL)), (((/* implicit */val<signed char>) min(((val<bool>)0), ((val<bool>)1)))))), (var_10)));
    *var_13 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((val<unsigned short>) (val<bool>)1))) >= (((/* implicit */val<int>) ((((717437993) < (((/* implicit */val<int>) var_6)))) && (((/* implicit */val<bool>) max(((val<unsigned char>)181), (var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)102;
unsigned short var_6 = (unsigned short)18966;
unsigned int var_7 = 2544285535U;
signed char var_10 = (signed char)78;
int zero = 0;
bool var_12 = (bool)1;
unsigned long long int var_13 = 4597334556568963841ULL;
unsigned short var_14 = (unsigned short)60187;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 2544285535ULL;
    value_mismatch |= var_14 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
