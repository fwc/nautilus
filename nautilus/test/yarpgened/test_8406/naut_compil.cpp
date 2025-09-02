/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8406
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8406
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_11, val<unsigned int> var_14, val<int> zero, val<signed char*> var_16, val<bool*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) (-((~((-(6665834420082810721ULL))))))))));
    if (((/* implicit */val<bool>) var_14))
    {
        *var_17 = ((/* implicit */val<bool>) var_1);
        *var_18 += ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) ((val<int>) var_11))), ((-(min((6665834420082810721ULL), (11780909653626740894ULL)))))));
        *var_19 &= ((/* implicit */val<bool>) min((6665834420082810721ULL), (11780909653626740894ULL)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18315503471142617011ULL;
unsigned char var_11 = (unsigned char)53;
unsigned int var_14 = 4123662388U;
int zero = 0;
signed char var_16 = (signed char)-83;
bool var_17 = (bool)1;
long long int var_18 = 882021903743027207LL;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-96;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -5783812516339783514LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
