/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSString;

@interface TLSound : NSObject {
    NSString *_filePath;
    BOOL _shouldDisposeOfSoundID;
    unsigned long _soundID;
}

@property(setter=_setShouldDisposeOfSoundID:) BOOL _shouldDisposeOfSoundID;
@property(copy) NSString * filePath;
@property unsigned long soundID;

- (void)_setFilePath:(id)arg1;
- (void)_setShouldDisposeOfSoundID:(BOOL)arg1;
- (void)_setSoundID:(unsigned long)arg1;
- (BOOL)_shouldDisposeOfSoundID;
- (void)dealloc;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 soundID:(unsigned long)arg2;
- (unsigned long)soundID;

@end
