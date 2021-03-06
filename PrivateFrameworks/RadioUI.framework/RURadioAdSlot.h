/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class ADAdSlot, NSArray, NSData, NSString;

@interface RURadioAdSlot : NSObject <ADAdSlotDelegate> {
    ADAdSlot *_adSlot;
    NSArray *_adTracks;
}

@property(readonly) ADAdSlot * adSlot;
@property(copy,readonly) NSArray * adTracks;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSData * followingSongData;
@property(getter=isGatewayAdSlot) BOOL gatewayAdSlot;
@property(readonly) unsigned int hash;
@property(copy) NSString * identifier;
@property(copy) NSData * previousSongData;
@property(copy) NSData * stationData;
@property(readonly) Class superclass;
@property(readonly) BOOL wasPreparedAsStationEntryAdSlot;

- (void).cxx_destruct;
- (void)adSlot:(id)arg1 didChangeSelectedAds:(id)arg2 previousAds:(id)arg3;
- (id)adSlot;
- (id)adTracks;
- (void)dealloc;
- (void)didFinishPlaybackOfAdTracks:(id)arg1 skippedCount:(int)arg2;
- (id)followingSongData;
- (id)identifier;
- (id)init;
- (id)initWithAdSlot:(id)arg1;
- (BOOL)isGatewayAdSlot;
- (id)previousSongData;
- (void)setFollowingSongData:(id)arg1;
- (void)setGatewayAdSlot:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPreviousSongData:(id)arg1;
- (void)setStationData:(id)arg1;
- (void)setWasPreparedAsStationEntryAdSlot:(BOOL)arg1;
- (id)stationData;
- (BOOL)wasPreparedAsStationEntryAdSlot;
- (void)willBeginPlaybackOfAdTracks:(id)arg1 forSpaceType:(int)arg2;

@end
