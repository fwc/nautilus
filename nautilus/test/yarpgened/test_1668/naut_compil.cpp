/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1668
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1668
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
void test(val<bool> var_0, val<signed char> var_1, val<unsigned long long int> var_8, val<unsigned char> var_11, val<bool> var_13, val<unsigned short> var_15, val<int> zero, val<unsigned char*> var_19, val<bool*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) var_13);
    *var_20 = ((((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) var_8)) ? (313193032U) : (313193032U))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_8)) || (var_13))))))) == (max((((/* implicit */val<long long int>) min((var_0), (var_13)))), (((((/* implicit */val<bool>) var_15)) ? (4363678939248813132LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))))));
    *var_21 = ((/* implicit */val<unsigned short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_1 = (signed char)1;
unsigned long long int var_8 = 1163384215174976996ULL;
unsigned char var_11 = (unsigned char)26;
bool var_13 = (bool)0;
unsigned short var_15 = (unsigned short)61379;
int zero = 0;
unsigned char var_19 = (unsigned char)116;
bool var_20 = (bool)0;
unsigned short var_21 = (unsigned short)43820;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (unsigned short)26;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, var_11, var_13, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
