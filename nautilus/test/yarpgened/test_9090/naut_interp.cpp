/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9090
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_5, val<int> var_16, val<int> zero, val<bool*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<bool>) var_16);
    *var_21 = ((/* implicit */val<bool>) max((*var_21), (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_5)))))));
    *var_22 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4205017465199824303ULL;
unsigned char var_5 = (unsigned char)216;
int var_16 = 754507306;
int zero = 0;
bool var_20 = (bool)0;
bool var_21 = (bool)1;
unsigned long long int var_22 = 11161130822212971941ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 4205017465199824303ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
}
