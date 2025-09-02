/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9922
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9922
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
void test(val<int> var_1, val<unsigned short> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_8, val<unsigned char> var_13, val<long long int> var_14, val<int> zero, val<unsigned char*> var_15, val<int*> var_16, val<unsigned short*> var_17, val<unsigned int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned char>) ((max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_13))))), ((+(var_4))))) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (((-(var_14))) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) <= (var_4)))))))))));
    *var_16 = ((/* implicit */val<int>) var_8);
    *var_17 = ((/* implicit */val<unsigned short>) var_3);
    *var_18 = ((/* implicit */val<unsigned int>) (~(var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1415469410;
unsigned short var_2 = (unsigned short)32813;
unsigned long long int var_3 = 4485421236941788300ULL;
unsigned long long int var_4 = 8384192565011096723ULL;
unsigned long long int var_8 = 11924034116100544786ULL;
unsigned char var_13 = (unsigned char)248;
long long int var_14 = 272511756316574011LL;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
int var_16 = -798504096;
unsigned short var_17 = (unsigned short)60773;
unsigned int var_18 = 2422285742U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)147;
    value_mismatch |= var_16 != 869259538;
    value_mismatch |= var_17 != (unsigned short)38028;
    value_mismatch |= var_18 != 1415469409U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_8, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
