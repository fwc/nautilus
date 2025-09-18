/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1146
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1146
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
void test(val<unsigned long long int> var_2, val<unsigned short> var_7, val<bool> var_14, val<bool> var_17, val<int> zero, val<unsigned char*> var_19, val<short*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) max((*var_19), (((/* implicit */val<unsigned char>) ((val<unsigned long long int>) var_7)))));
    *var_20 = (val<short>)-16220;
    *var_21 |= ((/* implicit */val<unsigned char>) min((min((((/* implicit */val<unsigned long long int>) (val<signed char>)29)), (((var_2) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))))))), (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_14)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18375537873677581927ULL;
unsigned short var_7 = (unsigned short)57953;
bool var_14 = (bool)1;
bool var_17 = (bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)104;
short var_20 = (short)-9984;
unsigned char var_21 = (unsigned char)133;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)104;
    value_mismatch |= var_20 != (short)-16220;
    value_mismatch |= var_21 != (unsigned char)133;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_14, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
