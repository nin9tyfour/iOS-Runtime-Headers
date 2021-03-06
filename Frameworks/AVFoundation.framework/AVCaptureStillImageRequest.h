/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject {
    id _bracketedCaptureCompletionBlock;
    AVCaptureBracketedStillImageSettings *_bracketedSettings;
    id _iosurfaceCompletionBlock;
    id _sbufCompletionBlock;
    long long _settingsID;
    unsigned long _shutterSoundID;
}

@property(copy) id bracketedCaptureCompletionBlock;
@property(retain) AVCaptureBracketedStillImageSettings * bracketedSettings;
@property(copy) id iosurfaceCompletionBlock;
@property(copy) id sbufCompletionBlock;
@property long long settingsID;
@property unsigned long shutterSoundID;

+ (id)request;

- (id)bracketedCaptureCompletionBlock;
- (id)bracketedSettings;
- (void)dealloc;
- (id)iosurfaceCompletionBlock;
- (id)sbufCompletionBlock;
- (void)setBracketedCaptureCompletionBlock:(id)arg1;
- (void)setBracketedSettings:(id)arg1;
- (void)setIosurfaceCompletionBlock:(id)arg1;
- (void)setSbufCompletionBlock:(id)arg1;
- (void)setSettingsID:(long long)arg1;
- (void)setShutterSoundID:(unsigned long)arg1;
- (long long)settingsID;
- (unsigned long)shutterSoundID;

@end
