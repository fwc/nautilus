/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5259
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5259
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
void test(val<unsigned char> var_0, val<bool> var_3, val<unsigned char> var_7, val<bool> var_9, val<unsigned long long int> var_11, val<int> zero, val<bool*> var_16, val<unsigned char*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_16 = var_9;
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<signed char>)24)) & (((/* implicit */val<int>) (val<signed char>)-24))));
    if ((!(((/* implicit */val<bool>) (val<signed char>)17))))
    {
        *var_18 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_7))));
        *var_19 = ((/* implicit */val<unsigned long long int>) var_3);
        *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_11)))))));
        *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (!((val<bool>)1)))) % (((/* implicit */val<int>) ((((((/* implicit */val<int>) var_0)) - (((/* implicit */val<int>) var_0)))) <= (((/* implicit */val<int>) ((val<unsigned short>) 1165699087))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
bool var_3 = (bool)0;
unsigned char var_7 = (unsigned char)216;
bool var_9 = (bool)0;
unsigned long long int var_11 = 2194629367964444819ULL;
int zero = 0;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)79;
unsigned long long int var_18 = 12483248883722348266ULL;
unsigned long long int var_19 = 12680569375187490952ULL;
unsigned int var_20 = 3079602131U;
unsigned char var_21 = (unsigned char)106;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (unsigned char)8;
    value_mismatch |= var_18 != 12483248883722348266ULL;
    value_mismatch |= var_19 != 12680569375187490952ULL;
    value_mismatch |= var_20 != 3079602131U;
    value_mismatch |= var_21 != (unsigned char)106;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_9, var_11, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
