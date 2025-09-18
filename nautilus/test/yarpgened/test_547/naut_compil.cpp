/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 547
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=547
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
void test(val<unsigned char> var_3, val<unsigned char> var_5, val<int> var_6, val<bool> var_7, val<int> var_9, val<int> var_10, val<int> zero, val<unsigned int*> var_11, val<long long int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) == (((/* implicit */val<int>) (!(var_7))))))), (var_9)));
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) + (max((((/* implicit */val<int>) min((var_5), (var_3)))), ((+(var_10))))))))
    {
        *var_12 = ((/* implicit */val<long long int>) (+(var_6)));
        *var_13 = ((/* implicit */val<signed char>) min(((+(((((/* implicit */val<bool>) var_5)) ? (var_6) : (var_9))))), (((/* implicit */val<int>) var_7))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)171;
unsigned char var_5 = (unsigned char)228;
int var_6 = 1171846564;
bool var_7 = (bool)0;
int var_9 = 439436404;
int var_10 = 328662381;
int zero = 0;
unsigned int var_11 = 3194885845U;
long long int var_12 = 3738437836763503704LL;
signed char var_13 = (signed char)37;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != 1171846564LL;
    value_mismatch |= var_13 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
