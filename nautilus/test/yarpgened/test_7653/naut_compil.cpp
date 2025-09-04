/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7653
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7653
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned long long int> var_4, val<unsigned char> var_5, val<bool> var_6, val<bool> var_10, val<unsigned char> var_11, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned long long int>) var_10)), (var_4))), (((/* implicit */val<unsigned long long int>) ((var_6) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_11)))))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (4294967275U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11))))) : (((/* implicit */val<int>) var_10))))) : (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) var_1))))), ((+(var_1)))))));
    *var_14 = ((/* implicit */val<bool>) (-(-324372836)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned int var_1 = 3118218684U;
unsigned long long int var_4 = 2771907557717865556ULL;
unsigned char var_5 = (unsigned char)145;
bool var_6 = (bool)1;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)234;
int zero = 0;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_10, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
