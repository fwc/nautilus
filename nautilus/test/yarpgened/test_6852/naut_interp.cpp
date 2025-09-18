/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6852
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6852
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
void test(val<unsigned short> var_3, val<long long int> var_4, val<unsigned char> var_12, val<unsigned char> var_13, val<int> zero, val<signed char*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) var_3);
    *var_19 = ((/* implicit */val<unsigned char>) (((+(((/* implicit */val<int>) ((var_4) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13)))))))) < (((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) 4276314228U)), (var_4)))) || (((/* implicit */val<bool>) var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62701;
long long int var_4 = -2767022944676336872LL;
unsigned char var_12 = (unsigned char)231;
unsigned char var_13 = (unsigned char)126;
int zero = 0;
signed char var_18 = (signed char)40;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-19;
    value_mismatch |= var_19 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_12, var_13, zero, &var_18, &var_19);
  checksum();
}
