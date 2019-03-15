/******************************************************************************/
Video video;
/******************************************************************************/
void InitPre()
{
   EE_INIT();
}
/******************************************************************************/
bool Init()
{
   if(!video.create(UID(352823356, 1075274726, 2906837907, 348097182)))Exit("Can't create video"); // create video from file
   return true;
}
/******************************************************************************/
void Shut()
{
}
/******************************************************************************/
bool Update()
{
   if(Kb.bp(KB_ESC))return false;

   video.update(Time.stateTime()); // update video to current state time

   return true;
}
/******************************************************************************/
void Draw()
{
   D    .clear ();
   video.drawFs(); // draw video
   D    .text  (0, 0.9, S+video.time()); // draw time position of video
}
/******************************************************************************/