/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet, NSArray;



@interface UILongPressGestureRecognizer : UIGestureRecognizer 
{
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    NSInteger _numberOfTouchesRequired;
    double _delay;
    float _allowableMovement;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    unsigned int _gotTouchEnd : 1;
    unsigned int _gotTooMany : 1;
    unsigned int _gotEnoughTaps : 1;
    unsigned int _cancelPastAllowableMovement : 1;
}

@property NSInteger numberOfTapsRequired;
@property double minimumPressDuration;
@property <UILongPressGestureRecognizerDelegate> *delegate;
@property(readonly) CGPoint startPoint;
@property(readonly) CGPoint centroid;
@property BOOL cancelPastAllowableMovement;
@property float allowableMovement;
@property double delay;
@property NSInteger numberOfTouchesRequired;
@property(retain,readonly) NSArray *touches;

+ (void)addLongPressGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 minimumPressDuration:(double)arg4;

- (NSInteger)numberOfTapsRequired;
- (double)minimumPressDuration;
- (BOOL)cancelPastAllowableMovement;
- (void)setCancelPastAllowableMovement:(BOOL)arg1;
- (void)setTouches:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (void)clearTimer;
- (void)startTimer;
- (void)_startTapFinishedTimer;
- (struct CGPoint { float x1; float x2; })centroidScreen;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (float)allowableMovement;
- (NSInteger)numberOfTouchesRequired;
- (void)setAllowableMovement:(float)arg1;
- (struct CGPoint { float x1; float x2; })centroid;
- (id)touches;
- (void)_resetGestureRecognizer;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(NSInteger)arg1;
- (void)setNumberOfTouchesRequired:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(NSUInteger)arg1 inView:(id)arg2;
- (void)setDelay:(double)arg1;
- (double)delay;
- (struct CGPoint { float x1; float x2; })startPoint;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (NSUInteger)numberOfTouches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end