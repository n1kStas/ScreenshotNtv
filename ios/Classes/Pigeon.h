// Autogenerated from Pigeon (v14.0.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN


/// The codec used by ScreenshotNtvApi.
NSObject<FlutterMessageCodec> *ScreenshotNtvApiGetCodec(void);

@protocol ScreenshotNtvApi
- (void)takeScreenshot:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpScreenshotNtvApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<ScreenshotNtvApi> *_Nullable api);

/// The codec used by ScreenshotNtvFlutterListener.
NSObject<FlutterMessageCodec> *ScreenshotNtvFlutterListenerGetCodec(void);

@interface ScreenshotNtvFlutterListener : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)takeResultScreenshot:(nullable FlutterStandardTypedData *)frame completion:(void (^)(FlutterError *_Nullable))completion;
@end

NS_ASSUME_NONNULL_END