/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5958
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
void test(val<signed char> var_0, val<long long int> var_11, val<unsigned char> var_17, val<int> zero, val<unsigned char*> var_18, val<unsigned short*> var_19) {
    *var_18 = var_17;
    *var_19 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) (val<short>)-18328)), (((((/* implicit */val<bool>) var_0)) ? (var_11) : (((/* implicit */val<long long int>) 3609395423U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
long long int var_11 = -8128480863053156482LL;
unsigned char var_17 = (unsigned char)239;
int zero = 0;
unsigned char var_18 = (unsigned char)70;
unsigned short var_19 = (unsigned short)61257;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)239;
    value_mismatch |= var_19 != (unsigned short)61310;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
