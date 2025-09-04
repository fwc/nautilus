/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9352
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9352
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
void test(val<short> var_0, val<unsigned int> var_1, val<int> var_2, val<unsigned int> var_3, val<long long int> var_4, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned int> var_10, val<int> zero, val<short*> var_11, val<short*> var_12, val<int*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_11 = ((/* implicit */val<short>) min((*var_11), (((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) (-((+(((/* implicit */val<int>) (val<unsigned char>)248))))))), (max((min((((/* implicit */val<unsigned int>) var_2)), (var_1))), (((/* implicit */val<unsigned int>) var_8)))))))));
    if (((/* implicit */val<bool>) min(((-(min((var_10), (((/* implicit */val<unsigned int>) var_7)))))), ((((+(var_3))) ^ (((/* implicit */val<unsigned int>) var_2)))))))
    {
        *var_12 = ((/* implicit */val<short>) var_10);
        *var_13 -= ((/* implicit */val<int>) var_0);
        *var_14 = ((/* implicit */val<unsigned char>) var_10);
    }

    *var_15 = ((/* implicit */val<unsigned char>) min((*var_15), (((/* implicit */val<unsigned char>) max(((~((+(var_4))))), (((/* implicit */val<long long int>) (val<unsigned short>)5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14760;
unsigned int var_1 = 2551050505U;
int var_2 = 1925995023;
unsigned int var_3 = 1325505724U;
long long int var_4 = -3793268596603453286LL;
unsigned char var_7 = (unsigned char)168;
unsigned char var_8 = (unsigned char)13;
unsigned int var_10 = 2355407166U;
int zero = 0;
short var_11 = (short)22651;
short var_12 = (short)28306;
int var_13 = 415623347;
unsigned char var_14 = (unsigned char)65;
unsigned char var_15 = (unsigned char)252;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)22651;
    value_mismatch |= var_12 != (short)-22210;
    value_mismatch |= var_13 != 415638107;
    value_mismatch |= var_14 != (unsigned char)62;
    value_mismatch |= var_15 != (unsigned char)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
