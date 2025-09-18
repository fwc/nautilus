/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4331
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4331
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<unsigned int> var_3, val<bool> var_5, val<unsigned int> var_10, val<unsigned int> var_15, val<int> zero, val<unsigned int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) min((*var_18), ((+(var_3)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<unsigned long long int>) var_10))))) ? (min((((/* implicit */val<unsigned int>) var_5)), (var_3))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)0)) | (((/* implicit */val<int>) (val<signed char>)-110))))))), (min((((/* implicit */val<unsigned int>) var_1)), (var_15)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15920308769457901250ULL;
int var_1 = 815575730;
unsigned int var_3 = 1296160373U;
bool var_5 = (bool)1;
unsigned int var_10 = 3563058216U;
unsigned int var_15 = 1580954082U;
int zero = 0;
unsigned int var_18 = 911615875U;
unsigned long long int var_19 = 10924614280038776932ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 911615875U;
    value_mismatch |= var_19 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_10, var_15, zero, &var_18, &var_19);
  checksum();
}
