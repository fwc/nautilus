/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9881
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9881
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
void test(val<signed char> var_2, val<signed char> var_3, val<unsigned int> var_6, val<signed char> var_7, val<int> zero, val<unsigned short*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_20 |= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 18U)) ? (var_6) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_2)) | (((/* implicit */val<int>) ((val<unsigned short>) var_7))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) var_3)), (31U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
signed char var_3 = (signed char)-8;
unsigned int var_6 = 4006725736U;
signed char var_7 = (signed char)-27;
int zero = 0;
unsigned short var_19 = (unsigned short)17520;
signed char var_20 = (signed char)36;
unsigned long long int var_21 = 8320734579134170071ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != (signed char)108;
    value_mismatch |= var_21 != 4294967288ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_7, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
