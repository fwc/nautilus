/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9315
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9315
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_4, val<short> var_6, val<unsigned short> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<int> zero, val<unsigned long long int*> var_10, val<long long int*> var_11, val<short*> var_12) {
    if (((/* implicit */val<bool>) min(((-(max((var_8), (((/* implicit */val<unsigned long long int>) var_9)))))), (((/* implicit */val<unsigned long long int>) ((9223372036854775807LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-59)))))))))
    {
        *var_10 = max((max((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_9))), (max((var_4), (var_4))))), (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)105))) | (var_8))))));
        *var_11 = ((/* implicit */val<long long int>) var_6);
    }

    *var_12 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((val<bool>) max((((/* implicit */val<unsigned short>) var_1)), (var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
unsigned long long int var_4 = 17175572584938842884ULL;
short var_6 = (short)-22902;
unsigned short var_7 = (unsigned short)26814;
unsigned long long int var_8 = 12888884283076273453ULL;
signed char var_9 = (signed char)96;
int zero = 0;
unsigned long long int var_10 = 17277590250894154792ULL;
long long int var_11 = 4813750711041787728LL;
short var_12 = (short)-15241;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 17175572584938842884ULL;
    value_mismatch |= var_11 != -22902LL;
    value_mismatch |= var_12 != (short)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
