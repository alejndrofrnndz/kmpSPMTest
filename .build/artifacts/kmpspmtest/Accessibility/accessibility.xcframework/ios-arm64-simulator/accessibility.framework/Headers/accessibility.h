#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSArray<ObjectType>, AccessibilityUShort, AccessibilityULong, AccessibilityUInt, AccessibilityUByte, AccessibilityShort, AccessibilityNumber, AccessibilityMutableSet<ObjectType>, AccessibilityMutableDictionary<KeyType, ObjectType>, AccessibilityLong, AccessibilityInt, AccessibilityFloat, AccessibilityDouble, AccessibilityByte, AccessibilityBoolean, AccessibilityBase, AccessibilityAccessiblityIdKt, AccessibilityAccessibilityIdVenueSelectionVenueItemRow, AccessibilityAccessibilityIdVenueSelectionTitleLabel, AccessibilityAccessibilityIdVenueSelectionRoleSelected, AccessibilityAccessibilityIdVenueSelectionChangeVenue, AccessibilityAccessibilityIdReceiptContentsLineItem, AccessibilityAccessibilityIdPosTemplateSelectionFoodTruck, AccessibilityAccessibilityIdPosTemplateSelectionDriveThru, AccessibilityAccessibilityIdPosTemplateSelectionDineInCarryOut, AccessibilityAccessibilityIdPosTemplateSelectionCurbside, AccessibilityAccessibilityIdPosTemplateSelectionCfaDelivery, AccessibilityAccessibilityIdPosTemplateSelectionCateringPickup, AccessibilityAccessibilityIdPosTemplateSelectionCateringDelivery, AccessibilityAccessibilityIdPinPadEntrySignIn, AccessibilityAccessibilityIdPinPadEntryKey, AccessibilityAccessibilityIdPinPadEntryDelete, AccessibilityAccessibilityIdPaymentTakerNumberPad, AccessibilityAccessibilityIdOrderTakingVenueLabel, AccessibilityAccessibilityIdOrderTakingToggleSideBar, AccessibilityAccessibilityIdOrderTakingSettingsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarTreatsLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarTreatsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarTraysLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarTraysButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarSidesLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarSidesButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarSaucesLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarSaucesButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarSaladsLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarSaladsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarPickupLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarPickupButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarMerchLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarMerchButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarMealsLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarMealsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarLocalLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarLocalButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarKidsMealsLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarKidsMealsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarEntreesLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarEntreesButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarDeliveryLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarDeliveryButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarCutleryLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarCutleryButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarCondimentsLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarCondimentsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarBunsLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarBunsButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarBreakfastLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarBreakfastButton, AccessibilityAccessibilityIdOrderTakingMenuSideBarBeveragesLabel, AccessibilityAccessibilityIdOrderTakingMenuSideBarBeveragesButton, AccessibilityAccessibilityIdOrderTakingMenuItem, AccessibilityAccessibilityIdOrderTakingEmptyStateTitle, AccessibilityAccessibilityIdOrderTakingAppSetupButton, AccessibilityAccessibilityIdNumberPadEntrySignIn, AccessibilityAccessibilityIdNumberPadEntryKey, AccessibilityAccessibilityIdNumberPadEntryDelete, AccessibilityAccessibilityIdManagerPinTitle, AccessibilityAccessibilityIdManagerPinSubmit, AccessibilityAccessibilityIdManagerPinPinInput, AccessibilityAccessibilityIdManagerPinErrorMessage, AccessibilityAccessibilityIdManagerPinContentTitle, AccessibilityAccessibilityIdManagerPinContentSubtitle, AccessibilityAccessibilityIdManagerPinClose, AccessibilityAccessibilityIdGuestInfoDestination, AccessibilityAccessibilityIdButtonSignOut, AccessibilityAccessibilityIdButtonQuantitySelector, AccessibilityAccessibilityIdButtonNext, AccessibilityAccessibilityIdButtonMoreKabobFulfillmentMethod, AccessibilityAccessibilityIdButtonIncrement, AccessibilityAccessibilityIdButtonDecrement, AccessibilityAccessibilityIdButtonChangeVenue, AccessibilityAccessibilityIdAuthenticationPleaseSignInLabel, AccessibilityAccessibilityIdAuthenticationPinPad, AccessibilityAccessibilityIdAuthenticationFailedSignInLabel;

@protocol NSCopying, AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityIdReceiptContents, AccessibilityAccessibilityIdPosTemplateSelection, AccessibilityAccessibilityIdPinPadEntry, AccessibilityAccessibilityIdPaymentTaker, AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityIdNumberPadEntry, AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityIdGuestInfo, AccessibilityAccessibilityIdButtonMoreKabob, AccessibilityAccessibilityIdButton, AccessibilityAccessibilityIdAuthentication, AccessibilityAccessibilityId;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AccessibilityBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AccessibilityBase (AccessibilityBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AccessibilityMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AccessibilityMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAccessibilityKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AccessibilityNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface AccessibilityByte : AccessibilityNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AccessibilityUByte : AccessibilityNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AccessibilityShort : AccessibilityNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AccessibilityUShort : AccessibilityNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AccessibilityInt : AccessibilityNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AccessibilityUInt : AccessibilityNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AccessibilityLong : AccessibilityNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AccessibilityULong : AccessibilityNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AccessibilityFloat : AccessibilityNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AccessibilityDouble : AccessibilityNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AccessibilityBoolean : AccessibilityNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("AccessibilityId")))
@protocol AccessibilityAccessibilityId
@required
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("AccessibilityIdAuthentication")))
@protocol AccessibilityAccessibilityIdAuthentication
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdAuthenticationFailedSignInLabel")))
@interface AccessibilityAccessibilityIdAuthenticationFailedSignInLabel : AccessibilityBase <AccessibilityAccessibilityIdAuthentication, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdAuthenticationFailedSignInLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)failedSignInLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdAuthenticationPinPad")))
@interface AccessibilityAccessibilityIdAuthenticationPinPad : AccessibilityBase <AccessibilityAccessibilityIdAuthentication, AccessibilityAccessibilityId>
@property (readonly) id<AccessibilityAccessibilityIdPinPadEntry> pinPadEntry __attribute__((swift_name("pinPadEntry")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithPinPadEntry:(id<AccessibilityAccessibilityIdPinPadEntry>)pinPadEntry __attribute__((swift_name("init(pinPadEntry:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdAuthenticationPinPad *)doCopyPinPadEntry:(id<AccessibilityAccessibilityIdPinPadEntry>)pinPadEntry __attribute__((swift_name("doCopy(pinPadEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdAuthenticationPleaseSignInLabel")))
@interface AccessibilityAccessibilityIdAuthenticationPleaseSignInLabel : AccessibilityBase <AccessibilityAccessibilityIdAuthentication, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdAuthenticationPleaseSignInLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pleaseSignInLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdButton")))
@protocol AccessibilityAccessibilityIdButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonChangeVenue")))
@interface AccessibilityAccessibilityIdButtonChangeVenue : AccessibilityBase <AccessibilityAccessibilityIdButton, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonChangeVenue *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)changeVenue __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonDecrement")))
@interface AccessibilityAccessibilityIdButtonDecrement : AccessibilityBase <AccessibilityAccessibilityIdButton, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonDecrement *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)decrement __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonIncrement")))
@interface AccessibilityAccessibilityIdButtonIncrement : AccessibilityBase <AccessibilityAccessibilityIdButton, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonIncrement *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)increment __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdButtonMoreKabob")))
@protocol AccessibilityAccessibilityIdButtonMoreKabob <AccessibilityAccessibilityId>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonMoreKabobFulfillmentMethod")))
@interface AccessibilityAccessibilityIdButtonMoreKabobFulfillmentMethod : AccessibilityBase <AccessibilityAccessibilityIdButtonMoreKabob>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonMoreKabobFulfillmentMethod *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fulfillmentMethod __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonNext")))
@interface AccessibilityAccessibilityIdButtonNext : AccessibilityBase <AccessibilityAccessibilityIdButton, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonNext *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)next __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonQuantitySelector")))
@interface AccessibilityAccessibilityIdButtonQuantitySelector : AccessibilityBase <AccessibilityAccessibilityIdButton, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonQuantitySelector *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)quantitySelector __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdButtonSignOut")))
@interface AccessibilityAccessibilityIdButtonSignOut : AccessibilityBase <AccessibilityAccessibilityIdButton, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdButtonSignOut *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signOut __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdGuestInfo")))
@protocol AccessibilityAccessibilityIdGuestInfo
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdGuestInfoDestination")))
@interface AccessibilityAccessibilityIdGuestInfoDestination : AccessibilityBase <AccessibilityAccessibilityId>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdGuestInfoDestination *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdManagerPin")))
@protocol AccessibilityAccessibilityIdManagerPin
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinClose")))
@interface AccessibilityAccessibilityIdManagerPinClose : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinClose *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)close __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinContentSubtitle")))
@interface AccessibilityAccessibilityIdManagerPinContentSubtitle : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinContentSubtitle *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contentSubtitle __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinContentTitle")))
@interface AccessibilityAccessibilityIdManagerPinContentTitle : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinContentTitle *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contentTitle __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinErrorMessage")))
@interface AccessibilityAccessibilityIdManagerPinErrorMessage : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinErrorMessage *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorMessage __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinPinInput")))
@interface AccessibilityAccessibilityIdManagerPinPinInput : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinPinInput *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pinInput __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinSubmit")))
@interface AccessibilityAccessibilityIdManagerPinSubmit : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinSubmit *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)submit __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdManagerPinTitle")))
@interface AccessibilityAccessibilityIdManagerPinTitle : AccessibilityBase <AccessibilityAccessibilityIdManagerPin, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdManagerPinTitle *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)title __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdNumberPadEntry")))
@protocol AccessibilityAccessibilityIdNumberPadEntry
@required
- (NSString *)tag_ __attribute__((swift_name("tag()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdNumberPadEntryDelete")))
@interface AccessibilityAccessibilityIdNumberPadEntryDelete : AccessibilityBase <AccessibilityAccessibilityIdNumberPadEntry, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdNumberPadEntryDelete *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)delete_ __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdNumberPadEntryKey")))
@interface AccessibilityAccessibilityIdNumberPadEntryKey : AccessibilityBase <AccessibilityAccessibilityIdNumberPadEntry, AccessibilityAccessibilityId>
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithIndex:(int32_t)index __attribute__((swift_name("init(index:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdNumberPadEntryKey *)doCopyKey:(NSString *)key __attribute__((swift_name("doCopy(key:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdNumberPadEntrySignIn")))
@interface AccessibilityAccessibilityIdNumberPadEntrySignIn : AccessibilityBase <AccessibilityAccessibilityIdNumberPadEntry, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdNumberPadEntrySignIn *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signIn __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdOrderTaking")))
@protocol AccessibilityAccessibilityIdOrderTaking
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingAppSetupButton")))
@interface AccessibilityAccessibilityIdOrderTakingAppSetupButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingAppSetupButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appSetupButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingEmptyStateTitle")))
@interface AccessibilityAccessibilityIdOrderTakingEmptyStateTitle : AccessibilityBase <AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingEmptyStateTitle *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)emptyStateTitle __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuItem")))
@interface AccessibilityAccessibilityIdOrderTakingMenuItem : AccessibilityBase <AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityId>
@property (readonly) int32_t itemIndex __attribute__((swift_name("itemIndex")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithItemIndex:(int32_t)itemIndex __attribute__((swift_name("init(itemIndex:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdOrderTakingMenuItem *)doCopyItemIndex:(int32_t)itemIndex __attribute__((swift_name("doCopy(itemIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBar")))
@protocol AccessibilityAccessibilityIdOrderTakingMenuSideBar <AccessibilityAccessibilityIdOrderTaking>
@required
- (NSString *)buttonTag __attribute__((swift_name("buttonTag()")));
- (NSString *)labelTag __attribute__((swift_name("labelTag()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarBeveragesButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarBeveragesButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarBeveragesButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)beveragesButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarBeveragesLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarBeveragesLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarBeveragesLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)beveragesLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarBreakfastButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarBreakfastButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarBreakfastButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)breakfastButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarBreakfastLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarBreakfastLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarBreakfastLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)breakfastLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarBunsButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarBunsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarBunsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bunsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarBunsLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarBunsLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarBunsLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bunsLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarCondimentsButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarCondimentsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarCondimentsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)condimentsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarCondimentsLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarCondimentsLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarCondimentsLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)condimentsLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarCutleryButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarCutleryButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarCutleryButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cutleryButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarCutleryLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarCutleryLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarCutleryLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cutleryLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarDeliveryButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarDeliveryButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarDeliveryButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deliveryButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarDeliveryLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarDeliveryLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarDeliveryLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deliveryLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarEntreesButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarEntreesButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarEntreesButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)entreesButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarEntreesLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarEntreesLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarEntreesLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)entreesLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarKidsMealsButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarKidsMealsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarKidsMealsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kidsMealsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarKidsMealsLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarKidsMealsLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarKidsMealsLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kidsMealsLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarLocalButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarLocalButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarLocalButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)localButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarLocalLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarLocalLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarLocalLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)localLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarMealsButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarMealsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarMealsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mealsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarMealsLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarMealsLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarMealsLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mealsLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarMerchButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarMerchButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarMerchButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)merchButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarMerchLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarMerchLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarMerchLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)merchLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarPickupButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarPickupButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarPickupButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pickupButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarPickupLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarPickupLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarPickupLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pickupLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarSaladsButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarSaladsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarSaladsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)saladsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarSaladsLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarSaladsLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarSaladsLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)saladsLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarSaucesButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarSaucesButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarSaucesButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)saucesButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarSaucesLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarSaucesLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarSaucesLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)saucesLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarSidesButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarSidesButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarSidesButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sidesButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarSidesLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarSidesLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarSidesLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sidesLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarTraysButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarTraysButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarTraysButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)traysButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarTraysLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarTraysLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarTraysLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)traysLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarTreatsButton")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarTreatsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarTreatsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)treatsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingMenuSideBarTreatsLabel")))
@interface AccessibilityAccessibilityIdOrderTakingMenuSideBarTreatsLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTakingMenuSideBar, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingMenuSideBarTreatsLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)treatsLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingSettingsButton")))
@interface AccessibilityAccessibilityIdOrderTakingSettingsButton : AccessibilityBase <AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingSettingsButton *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)settingsButton __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingToggleSideBar")))
@interface AccessibilityAccessibilityIdOrderTakingToggleSideBar : AccessibilityBase <AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdOrderTakingToggleSideBar *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)toggleSideBar __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdOrderTakingVenueLabel")))
@interface AccessibilityAccessibilityIdOrderTakingVenueLabel : AccessibilityBase <AccessibilityAccessibilityIdOrderTaking, AccessibilityAccessibilityId>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdOrderTakingVenueLabel *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdPaymentTaker")))
@protocol AccessibilityAccessibilityIdPaymentTaker
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPaymentTakerNumberPad")))
@interface AccessibilityAccessibilityIdPaymentTakerNumberPad : AccessibilityBase <AccessibilityAccessibilityIdAuthentication, AccessibilityAccessibilityId>
@property (readonly) id<AccessibilityAccessibilityIdNumberPadEntry> numberPadEntry __attribute__((swift_name("numberPadEntry")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithNumberPadEntry:(id<AccessibilityAccessibilityIdNumberPadEntry>)numberPadEntry __attribute__((swift_name("init(numberPadEntry:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdPaymentTakerNumberPad *)doCopyNumberPadEntry:(id<AccessibilityAccessibilityIdNumberPadEntry>)numberPadEntry __attribute__((swift_name("doCopy(numberPadEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdPinPadEntry")))
@protocol AccessibilityAccessibilityIdPinPadEntry
@required
- (NSString *)tag_ __attribute__((swift_name("tag()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPinPadEntryDelete")))
@interface AccessibilityAccessibilityIdPinPadEntryDelete : AccessibilityBase <AccessibilityAccessibilityIdPinPadEntry, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPinPadEntryDelete *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)delete_ __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPinPadEntryKey")))
@interface AccessibilityAccessibilityIdPinPadEntryKey : AccessibilityBase <AccessibilityAccessibilityIdPinPadEntry, AccessibilityAccessibilityId>
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithIndex:(int32_t)index __attribute__((swift_name("init(index:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdPinPadEntryKey *)doCopyKey:(NSString *)key __attribute__((swift_name("doCopy(key:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPinPadEntrySignIn")))
@interface AccessibilityAccessibilityIdPinPadEntrySignIn : AccessibilityBase <AccessibilityAccessibilityIdPinPadEntry, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPinPadEntrySignIn *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signIn __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdPosTemplateSelection")))
@protocol AccessibilityAccessibilityIdPosTemplateSelection
@required
@end

__attribute__((swift_name("AccessibilityIdVenueSelection")))
@protocol AccessibilityAccessibilityIdVenueSelection
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionCateringDelivery")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionCateringDelivery : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionCateringDelivery *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cateringDelivery __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionCateringPickup")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionCateringPickup : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionCateringPickup *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cateringPickup __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionCfaDelivery")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionCfaDelivery : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionCfaDelivery *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cfaDelivery __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionCurbside")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionCurbside : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionCurbside *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)curbside __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionDineInCarryOut")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionDineInCarryOut : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionDineInCarryOut *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dineInCarryOut __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionDriveThru")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionDriveThru : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionDriveThru *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)driveThru __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdPosTemplateSelectionFoodTruck")))
@interface AccessibilityAccessibilityIdPosTemplateSelectionFoodTruck : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId, AccessibilityAccessibilityIdPosTemplateSelection>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdPosTemplateSelectionFoodTruck *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)foodTruck __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AccessibilityIdReceiptContents")))
@protocol AccessibilityAccessibilityIdReceiptContents
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdReceiptContentsLineItem")))
@interface AccessibilityAccessibilityIdReceiptContentsLineItem : AccessibilityBase <AccessibilityAccessibilityIdReceiptContents, AccessibilityAccessibilityId>
@property (readonly) int32_t itemIndex __attribute__((swift_name("itemIndex")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithItemIndex:(int32_t)itemIndex __attribute__((swift_name("init(itemIndex:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdReceiptContentsLineItem *)doCopyItemIndex:(int32_t)itemIndex __attribute__((swift_name("doCopy(itemIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdVenueSelectionChangeVenue")))
@interface AccessibilityAccessibilityIdVenueSelectionChangeVenue : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdVenueSelectionChangeVenue *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)changeVenue __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdVenueSelectionRoleSelected")))
@interface AccessibilityAccessibilityIdVenueSelectionRoleSelected : AccessibilityBase <AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdVenueSelectionRoleSelected *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)roleSelected __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdVenueSelectionTitleLabel")))
@interface AccessibilityAccessibilityIdVenueSelectionTitleLabel : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId>
@property (class, readonly, getter=shared) AccessibilityAccessibilityIdVenueSelectionTitleLabel *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)titleLabel __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessibilityIdVenueSelectionVenueItemRow")))
@interface AccessibilityAccessibilityIdVenueSelectionVenueItemRow : AccessibilityBase <AccessibilityAccessibilityIdVenueSelection, AccessibilityAccessibilityId>
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (AccessibilityAccessibilityIdVenueSelectionVenueItemRow *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessiblityIdKt")))
@interface AccessibilityAccessiblityIdKt : AccessibilityBase
+ (AccessibilityAccessibilityIdAuthenticationPinPad *)AuthPinPadEntrySignin __attribute__((swift_name("AuthPinPadEntrySignin()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
