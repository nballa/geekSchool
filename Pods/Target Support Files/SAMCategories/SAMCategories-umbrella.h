#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSArray+SAMAdditions.h"
#import "NSData+SAMAdditions.h"
#import "NSDate+SAMAdditions.h"
#import "NSDictionary+SAMAdditions.h"
#import "NSNumber+SAMAdditions.h"
#import "NSObject+SAMAdditions.h"
#import "NSString+SAMAdditions.h"
#import "NSURL+SAMAdditions.h"
#import "NSUserDefaults+SAMAdditions.h"
#import "SAMCategories.h"
#import "UIApplication+SAMAdditions.h"
#import "UIColor+SAMAdditions.h"
#import "UIControl+SAMAdditions.h"
#import "UIDevice+SAMAdditions.h"
#import "UIScreen+SAMAdditions.h"
#import "UIScrollView+SAMAdditions.h"
#import "UIView+SAMAdditions.h"
#import "UIViewController+SAMAdditions.h"

FOUNDATION_EXPORT double SAMCategoriesVersionNumber;
FOUNDATION_EXPORT const unsigned char SAMCategoriesVersionString[];

