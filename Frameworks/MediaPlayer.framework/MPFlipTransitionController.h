/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIView;



@interface MPFlipTransitionController : MPTransitionController 
{
    UIView *_fromView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _toFrame;
}

@property CGRect toFrame;
@property(retain) UIView *fromView;


- (id)fromView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)leaveSpaceForStatusBarAndNavigationBarInOrientation:(NSInteger)arg1;
- (id)_subtypeForTransitionType:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })toFrame;
- (void)setToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFromView:(id)arg1;
- (void)transition:(NSUInteger)arg1;

@end