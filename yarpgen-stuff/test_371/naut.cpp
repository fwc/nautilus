/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 371
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=371
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<bool> var_2, val<signed char> var_3, val<int> var_4, val<int> var_5, val<long long int> var_10, val<signed char> var_14, val<int> zero, val<long long int*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) max((var_10), (((/* implicit */val<long long int>) var_14)))))) || (((/* implicit */val<bool>) min((((/* implicit */val<int>) ((val<unsigned char>) var_3))), (((val<int>) 9223372036854775786LL)))))));
    *var_16 &= ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) ((val<short>) 5117972177271822587ULL))) > (((/* implicit */val<int>) (val<unsigned char>)206)))) ? (((val<int>) ((val<unsigned short>) var_4))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (-4383378649528976517LL) : (((/* implicit */val<long long int>) -882877938))))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
signed char var_3 = (signed char)111;
int var_4 = 201575225;
int var_5 = 1484953651;
long long int var_10 = -1130921925050876093LL;
signed char var_14 = (signed char)44;
int zero = 0;
long long int var_15 = 3263385506936951894LL;
long long int var_16 = 291559713703141146LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_10, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
