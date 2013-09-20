/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLock, RadioGetTracksRequest, RadioRequestContext, RadioStation;

@interface MPPrepareRadioPlaybackOperation : NSOperation <_MPRadioOperationProtocol> {
    id _firstTrackBlock;
    RadioGetTracksRequest *_loadTracksRequest;
    NSLock *_lock;
    id _preparedBlock;
    RadioRequestContext *_requestContext;
    RadioStation *_station;
}

@property(copy) id firstTrackBlock;
@property(copy) id preparedBlock;
@property(copy) RadioRequestContext * requestContext;

+ (BOOL)stationNeedsPreparation:(id)arg1;

- (void).cxx_destruct;
- (id)_loadStationTracks:(id*)arg1;
- (void)cancel;
- (id)firstTrackBlock;
- (id)initWithStation:(id)arg1;
- (void)main;
- (id)preparedBlock;
- (id)requestContext;
- (void)setFirstTrackBlock:(id)arg1;
- (void)setPreparedBlock:(id)arg1;
- (void)setRequestContext:(id)arg1;

@end