obj
===

object loader class for opengl

this takes a .obj file (triangulated) exported from blender,
and creates a linked list of triangles to be drawn with opengl
(or theoretically any drawer)

initialize an object with:

  objloader [ object name ] ( [ filename string ] ) ;

then build the list of triangles:

  [ object name ].build_list();
  
then create a pointer to the elements of the list

  objloader::triangle * p;
  
  p = list;
  
then each element in the list will be accessed like so

{

  glBegin(GL_TRIANGLES);
    glVertex3f( p->A.x, p->A.y, p->A.z );
    glVertex3f( p->B.x, p->B.y, p->B.z );
    glVertex3f( p->C.x, p->C.y, p->C.z );
  glEnd();
  
  p = p->next;
  
}
