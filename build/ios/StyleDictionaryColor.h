
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Mon, 17 May 2021 20:59:03 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
Borders8Stroke,
ColorsGrayscale50,
ColorsGrayscale100,
ColorsGrayscale200,
ColorsGrayscale300,
ColorsGrayscale400,
ColorsGrayscale500,
ColorsGrayscale600,
ColorsGrayscale700,
ColorsGrayscale800,
ColorsNeutralsBlack,
ColorsNeutralsWhite,
ColorsPrimary100,
ColorsPrimary200,
ColorsPrimary300,
ColorsPrimary400,
ColorsPrimary600,
ColorsPrimary500Default,
ColorsSuccess100,
ColorsSuccess200,
ColorsSuccess300,
ColorsSuccess400,
ColorsSuccess500,
ColorsSuccess600,
ColorsWarning100,
ColorsWarning200,
ColorsWarning300,
ColorsWarning400,
ColorsWarning500,
ColorsWarning600,
ColorsError100,
ColorsError200,
ColorsError300,
ColorsError400,
ColorsError500,
ColorsError600,
EffectsDropShadowSmallColor,
EffectsDropShadowLargeColor,
EffectsDropShadowMediumColor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
