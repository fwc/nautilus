/*
yarpgen version 2.0 (build 27a5fb5 on 1980:01:01)
Seed: 12
Invocation: ./yarpgen --seed=12 --nautilus=true -o /home/marg/nes/nautilus/yarpgen-stuff/test_12
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_0, val<long long int> var_1, val<long long int> var_3, val<signed char> var_4, val<short> var_5, val<unsigned int> var_9, val<int> var_10, val<int> var_11, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) var_5)), (max((((var_1) & (((/* implicit */val<long long int>) var_0)))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<short>)-7571)) - (((/* implicit */val<int>) (val<signed char>)112)))))))));
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<int>) (val<unsigned char>)21)) : (((/* implicit */val<int>) (val<short>)-16922))))) ^ (((val<unsigned int>) var_11))))) / (max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)15375)) : (var_10)))), (var_3)))));
    *var_14 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)0))) | (max((var_9), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<unsigned short>)65535)))))))));
}

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 609697150;
long long int var_1 = -1787932452266411104LL;
long long int var_3 = 825658871236747665LL;
signed char var_4 = (signed char)-25;
short var_5 = (short)5539;
unsigned int var_9 = 2628517653U;
int var_10 = 1004618135;
int var_11 = -835834387;
int zero = 0;
unsigned short var_12 = (unsigned short)11253;
unsigned short var_13 = (unsigned short)46125;
unsigned short var_14 = (unsigned short)9390;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  std::cout << "Result: " << seed << std::endl;
}
